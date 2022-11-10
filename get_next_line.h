/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 22:00:26 by ahelper           #+#    #+#             */
/*   Updated: 2020/11/27 22:00:30 by ahelper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 1
# include "stdlib.h"
# include "unistd.h"
# include "fcntl.h"
# include <math.h>
# define SCALE 16

typedef struct	s_bu
{
	int w;
	int a;
	int s;
	int d;
	int right;
	int left;
}				t_bu;

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct	s_spr
{
	double		inte_x;
	double		inte_y;
	double		begin_x;
	double		begin_y;
	double		end_x;
	double		end_y;
	double		x;
	double		y;
	double		dist;
	double		dist_y;
	double		dist_x;
	double		pos_x;
	double		pos_y;
	double		map_x;
	double		map_y;

}				t_spr;

typedef struct	s_tex
{
	double			wall_x;
	int				tex_x;
	double			step;
	int				tex_height;
	int				tex_width;
	double			tex_pos;
	int				i;
	int				tex_y;
	unsigned int	color;
	int				bpp;
	int				line_l;
	void			*img;
	void			*addr;
	int				endian;
	char			*relative_path;
}				t_tex;

typedef struct	s_win
{
	double	distance;
	int		hight;
	int		width;
	void	*mlx;
	void	*win;
	void	*img;
	void	*addr;
	int		line_l;
	int		bpp;
	int		endian;
	int		x;
	int		y;
	int		max_hight;
	int		max_width;
}				t_win;

typedef struct	s_point
{
	double		delta_dist_y;
	double		delta_dist_x;
	int			step_x;
	int			step_y;
	double		perp_wall_dist;
	int			map_x;
	int			map_y;
	double		ray_dir_y;
	double		ray_dir_x;
	double		side_dist_x;
	double		side_dist_y;
	double		dir_x;
	double		dir_y;
}				t_point;

typedef struct	s_plr
{
	double		plane_x;
	double		plane_y;
	double		plane_scale;
	double		dir_x;
	double		dir_y;
	double		pos_x;
	double		pos_y;
	float		dir;
	float		start;
	float		end;
	char		**world_map;
}				t_plr;

t_tex			g_texture1;
t_tex			g_texture2;
t_tex			g_texture3;
t_tex			g_texture4;
t_tex			g_texture5;

t_bu			g_button;
t_plr			g_person;
t_point			g_poi;
t_win			g_wi;
t_spr			g_sprite;
unsigned int	g_cc;
unsigned int	g_fc;
int				g_string_number;

int				ft_strncmp(const char *str1, const char *str2, size_t num);
void			ft_bzero(void *s, size_t n);
size_t			ft_strlen(const char *str);
int				contains_n(char *y);
char			*ft_substr(char *s, unsigned long start, size_t len);
char			*ft_strjoin(char **s1, char **s2);
void			buff_eater(int *a, char **b, char **c, char **z);
void			*ft_memcpy(void *dest, void *source, size_t n);
int				ft_write_buff(char **m1, char **t1, char **line1);
int				ft_readnwrite_buff(char **m2, char **t2, char **line2, int fd2);
int				get_next_line(int fd, char **line);
void			*ft_calloc(size_t num, size_t size);
int				ft_check_wall_x(char *kart, int x);
int				ft_check_wall_y(char **kart, int y, int x);
void			ft_lstadd_back(t_list **lst, t_list *new);
t_list			*ft_lstnew(void *content);
int				ft_lstsize(t_list *lst);
void			*ft_memcpy(void *dest, void *source, size_t n);
char			**makearr(char *argv);
int				mapa_check(char ***mapa);
void			get_info(char ***mapa);
char			**mapmaking(t_list **stru, size_t size);
int				pars(int argc, char *argv, char ***mapa);
int				player_check(char simb, int *player, int x, int y);
int				simbol_check(char simb);
int				wall_check(char ***mapa, int i, int j);
t_list			*ft_lstlast(t_list *lst);
int				ft_isdigit(int c);
int				ft_atoi(const char *str);
char			*ft_strtrim(char *s1, char const *set);
char			*ft_strdup(const char *str);
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			bmp_header(int file_size, int fd);
void			collision_minus(double *step_x, double *step_y);
void			collision_plus(double *step_x, double *step_y);
int				do_draw_frame(void);
int				draw_frame(void);
void			drawsprite(void);
void			ft_save_bmp_image(void);
void			get_pixel(int fd);
int				hook_close_cross(void);
void			hook_close(int *keycode);
void			hook_strave(int *keycode);
void			hook_turn(int *keycode);
void			hook_upndown(int *keycode);
int				key_hook0(int keycode);
int				key_hook1(int keycode);
int				key_relise(void);
void			my_mlx_pixel_put(t_win *data, int x, int y, int color);
void			rayprep(double *camera_x);
void			screen_limit(void);
void			screen_shot(void);
void			searchndraw(int map_y, int map_x);
void			sprite_border(int map_x, int map_y);
void			sprite_prop(int *line_height);
void			sprite_texput(int draw_start, int draw_end);
void			spriteinte(void);
void			spriteprep(int map_y, int map_x);
void			stepprep(void);
void			tex_choice(int side);
void			tex_prop(int *line_height, int side, t_tex *texture);
void			tex_put(int draw_start, int draw_end, t_tex *texture);
void			tex_realize(int *side);
void			tex_xx(int *draw_start, int line_height,\
t_tex *texture, int side);
void			texdrow(t_tex *texture, int side);
void			texprep(t_tex *textura, char *str);
void			texture_add(void);
int				to_point_cube(char **argv);
void			transfer(int n, unsigned char *src);
void			turn(void);
void			wallsearch(int *side);
void			zerobutt(void);
void			free_buff(char **buff);
int				spacelen(char *st);
void			digit_take(unsigned int *c, char ***mapa);
void			voidstringskip(char ***mapa);
void			digitskip(char ***mapa);
void			endskip(char ***mapa);
void			commaskip(char ***mapa);
void			splitskip(char ***mapa);
void			all_skip(char ***mapa, char **buff);
unsigned int	takecolor(char ***mapa, int *k);
void			zeroskip(char ***mapa);
void			restake(char ***mapa, int *k);
char			*passcre(int i, char **mapa);
void			pass_err(char *pass);
char			*taketex(char ***mapa, int *k);
void			get_error(void);
char			*ft_spaces(const char *st);

#endif
