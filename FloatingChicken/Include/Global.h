#pragma once

#include <string>
#include <iostream>

//Window config
#define GAME_NAME "Flappy Bird"
#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 820
#define HALF_SCREEN_WIDTH SCREEN_WIDTH / 2
#define HALF_SCREEN_HEIGHT SCREEN_HEIGHT / 2

//Game config
#define SCREEN_OFFSET 200
#define TEXT_SIZE 24
#define BIRD_WIDTH 40
#define BIRD_HEIGHT 50
#define GROUND_Y_SIZE 10
#define GROUND_HEIGHT SCREEN_HEIGHT - GROUND_Y_SIZE
#define DISTANCE_BETWEEN_PIPE 190
#define GAP_BETWEEN_PIPE 280
#define PIPE_WIDTH 70
#define PIPE_HEIGHT 620
#define PIPE_MIN_Y 120
#define PIPE_MAX_Y SCREEN_HEIGHT - (PIPE_MIN_Y + DISTANCE_BETWEEN_PIPE)
#define PIPE_SPAWN_TIME 3
#define MOVING_SPEED 120


//UI config
#define BUTTON_WIDTH 200
#define BUTTON_HEIGHT 40

//File path
//texture
#define DEFAULT_FONT "font/OpenSans-Bold.ttf"
#define GAME_FONT "font/gomarice_game_continue_02.ttf"
#define VOLUMN_BAR "texture/volumn_color.png"
#define VOLUMN_BAR_EMPTY "texture/volumn_empty.png"
#define VOLUMN_SLIDER "texture/volumn_slider.png"
#define BUTTON_EMPTY "texture/button_empty.png"
#define PIPE_TEXTURE "texture/pipe.png"
#define BIRD_TEXTURE "texture/bird_sprite_sheet.png"
#define LOGO_TEXTURE "texture/logo_splash_screen.png"
#define GROUND_TEXTURE "texture/Ground.png"
//sound
#define UI_CLICK "sound/UI_click.wav"
#define POINT_EARN "sound/point_earn.wav"
#define DIE_SFX "sound/sfx_die.wav"
#define FACE_SMASH "sound/face_smash.wav"
#define FLY_UP "sound/bird_wing.wav"