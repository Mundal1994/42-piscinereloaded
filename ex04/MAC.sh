ifconfig -a link | grep ether | tr -d '\t' | tr -d ' ' | cut -c 6-22