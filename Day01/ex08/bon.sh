ldapsearch -x "sn=*bon*" | grep 'dn' | wc -l | sed "s/ //g"

