cat /etc/passwd | sed 1,10d | awk 'NR%2==0' | cut -d ':' -f 1 | rev | sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | tr -s '\n' ',' | sed 's/, */, /g' | sed 's/, *$/./'
