cat $1 | grep -i "Nicolas\tBomber" | grep '[0-9]\{6\}-[0-9]\{4\}' | cut -f3
