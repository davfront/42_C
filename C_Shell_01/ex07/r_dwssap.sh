cat /etc/passwd | grep "^[^#]" | sed -n "n;p" | cut -d ':' -f 1 | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | sed 's/$/, /' | tr -d '\n' | sed 's/\, $/./' | tr -d '\n'
