#!/bin/zsh
for i in {0..2}; do
	journalctl -b-$i | grep "Startup finished in"
done
