/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soahn <soahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 09:53:06 by soahn             #+#    #+#             */
/*   Updated: 2021/03/10 05:03:50 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper.h"

int			g_cond[16]; // 인자로 받은 16개 문자를 넣을 배열 생성

int		check_line_right(int *ptr, int intvl, int cond) // 비교해야하는 포인터시작값, 해당 행 혹은 열로 이동하기 위한 주소값, 그 행또는 열에  맞는 배열값
{
	int	highst; //한층 오를때마다 최댓값
	int	i;
	int	visible;  //눈에 보이는 층의 개수

	highst = 0;
	i = 0;
	visible = 0;
	while (++i < 5) //i는 1부터 4까지 총 4번
	{
		if (*ptr > highst)  //시작하는 곳에 포인터부터 최댓값에 넣어준다
		{
			highst = *ptr;
			visible++; // 한층 보이니까 한층 추가
		}
		ptr += intvl; // 주소값 다음으로 이동후 다시 비교
	}
	return (visible == cond); // 눈에 보이는 층의 개수 = cond 배열값과 똑같으면 1리턴
}

int		is_answer(void) // 정답체크할껀데 
{
	int	*ptr;  //int형인 놈의 주소를 저장할수 잇는 포인터
	int	i;
	int	j;
	int	idx;

	idx = 0;
	i = 0;
	while (i < 4)
	{
		ptr = g_start[i]; //자아까 초기화해놧던  4개의 포인터 주소잇지? 걔네들은 각자
					//위4개 아래 4개 왼쪽4개(16개배열순) 오른쪽4개 와 비교할 수 있게 해줄거야
		j = 0;
		while (j < 4)// 각포인터마다 한줄씩 네번 비교하게지?
		{
			if (!check_line_right(ptr, g_move_intvl[i][0], g_cond[idx++])) //만약에 배열과 맞지않다면 오답이니까 리턴 0
				return (0);
			ptr += g_move_intvl[i][1];  //무사히 통과면 다음줄로 이동! 해당 포인터에 맞는 줄이동주소값주는겨
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_isspace(char c) // 들어온 문자가 
{
	if (c == 32) // ' ' 이니?
		return (1); // 맞으면 참
	return (0); // 틀리면 거짓
}

int		make_condition(char *cond)
{
	int		cnt;   // 숫자 셀 변수
	int		i;   

	i = 0;
	cnt = 0;
	while (cond[i]) // 해당 i번째 문자가 널이 아니면 반복 
	{
		if (i % 2 == 0 && !ft_isspace(cond[i]) // 인자가 argv[1] 부터 들어 왓으므로 cond[0]부터 숫자로 시작, "4 3 2 1" 0 2 4 6 순으로 숫자는 짝수번째임
				&& (cond[i] >= '1' && cond[i] <= '4')) // 짝수번째이고 공백이 아니고 문자가 1~4 사이인 것들만
			g_cond[cnt++] = cond[i++] - '0'; // g_cond 배열에 int 숫자로 변형해서 넣자
		else if (i % 2 == 1 && ft_isspace(cond[i])) // 홀수번째이고 ' ' 이다? 그럼 넘어가
			i++;
		else			// 그 이외의 것? 무조건 리턴 0이지. 이건 못참지
			return (0);
	}
	return (cnt == 16);  // 그렇게 다 끝나서 딱 16개를 무사히 다 넣었다면 리턴1을 보낼테고 아니면 0이겟지
}
