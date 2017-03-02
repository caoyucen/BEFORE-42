ldapsearch -LLL -Q "(cn=*bon*)" cn | grep cn | wc -l | bc
