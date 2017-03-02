a=$(ifconfig | grep "inet " | grep -v 127.0.0.1 | cut -d \  -f2);
if [ -z "$a" ]
then
	echo "Je suis perdu!"
else
	echo "$a"
fi
