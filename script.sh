#!/bin/zsh -e
cd ~/Desktop/so_long/
git clone https://github.com/42Paris/minilibx-linux.git minilibx && cd minilibx
./configure
mkdir -p ./include
#mkdir -p permet de creer des repertoires et des sous repertoires (meme sils nexistent pas)
cp mlx.h ./include/.
exec zsh.