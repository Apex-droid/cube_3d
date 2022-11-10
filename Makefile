src = buff_eater.c contains_n.c ft_calloc.c ft_check_wall_x.c ft_check_wall_y.c ft_lstadd_back.c ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_memcpy.c ft_readnwrite_buff.c ft_strjoin.c ft_strlen.c ft_substr.c ft_write_buff.c get_next_line.c mapa_check.c mapmaking.c pars.c player_check.c simbol_check.c wall_check.c makearr.c pisel_put_test.c get_info.c ft_strtrim.c ft_atoi.c ft_isdigit.c ft_bzero.c ft_strncmp.c ft_lstclear.c ft_strdup.c bmp_header.c collision_minus.c collision_plus.c do_draw_frame.c draw_frame.c drawsprite.c ft_save_bmp_image.c get_pixel.c hook_close_cross.c hook_close.c hook_strave.c hook_turn.c hook_upndown.c key_hook0.c key_hook1.c key_relise.c my_mlx_pixel_put.c rayprep.c screen_limit.c screenshot.c searchndraw.c sprite_border.c sprite_prop.c sprite_texput.c spriteinte.c spriteprep.c stepprep.c tex_choice.c tex_prop.c tex_put.c tex_realize.c tex_xx.c texdrow.c texprep.c texture_add.c to_point_cube.c transfer.c turn.c wallsearch.c zerobutt.c get_error.c taketex.c pass_err.c passcre.c restake.c zeroskip.c takecolor.c all_skip.c splitskip.c commaskip.c endskip.c digitskip.c voidstringskip.c digit_take.c spacelen.c free_buff.c ft_spaces.c 
obj = buff_eater.o contains_n.o ft_calloc.o ft_check_wall_x.o ft_check_wall_y.o ft_lstadd_back.o ft_lstlast.o ft_lstnew.o ft_lstsize.o ft_memcpy.o ft_readnwrite_buff.o ft_strjoin.o ft_strlen.o ft_substr.o ft_write_buff.o get_next_line.o mapa_check.o mapmaking.o pars.o player_check.o simbol_check.o wall_check.o makearr.o pisel_put_test.o get_info.o ft_strtrim.o ft_atoi.o ft_isdigit.o ft_bzero.o ft_strncmp.o ft_lstclear.o ft_strdup.o bmp_header.o collision_minus.o collision_plus.o do_draw_frame.o draw_frame.o drawsprite.o ft_save_bmp_image.o get_pixel.o hook_close_cross.o hook_close.o hook_strave.o hook_turn.o hook_upndown.o key_hook0.o key_hook1.o key_relise.o my_mlx_pixel_put.o rayprep.o screen_limit.o screenshot.o searchndraw.o sprite_border.o sprite_prop.o sprite_texput.o spriteinte.o spriteprep.o stepprep.o tex_choice.o tex_prop.o tex_put.o tex_realize.o tex_xx.o texdrow.o texprep.o texture_add.o to_point_cube.o transfer.o turn.o wallsearch.o zerobutt.o get_error.o taketex.o pass_err.o passcre.o restake.o zeroskip.o takecolor.o all_skip.o splitskip.o commaskip.o endskip.o digitskip.o voidstringskip.o digit_take.o spacelen.o free_buff.o ft_spaces.o
flagsC = gcc -g -Wall -Wextra -Werror -Imlx -c 

flagsO = gcc -lm -lmlx -framework OpenGL -framework AppKit 

comp:
	${flagsC} ${src}

all: comp
	${flagsO} ${obj} ./minilibx_mms/libmlx.dylib -o cub3D

clean:
	rm -f ${obj}

fclean: clean 
	rm -f cub3D

re: fclean all