echo "\e[31mRemoving...\e[0m\n"
sudo rm -f /bin/wordlisto 
sudo rm -f /usr/local/bin/wordlisto
sudo rm -r -f /usr/share/wordlisto
sudo rm -f /usr/share/man/man1/wordlisto.1.gz
if [ -e /bin/wordlisto ] ;
then
echo "\e[31mERROR\e[0m\n"
else
echo "\e[92mRemoved.\e[0m\n"
fi
exit
