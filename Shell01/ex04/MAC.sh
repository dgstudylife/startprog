ifconfig -a | grep ether | sed 's/\t//g' | sed 's/ether //g'
