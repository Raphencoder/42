ifconfig | grep ether | sed "s/ether //;s/ //" | cut -c 2-
