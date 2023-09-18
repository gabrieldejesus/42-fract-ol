# fract-ol

Discover 2D programming and the psychedelic universe of fractals in this project, using minilibX.

## Skills

- 2D programming
- Optimization techniques
- Some Maths
- Imperative programming
- Graphics

### Objectives

It’s time for you to create a basic computer graphics project!

You are going to use the school graphical library: the **MiniLibX!** This library was
developed internally and includes basic necessary tools to open a window, create images
and deal with keyboard and mouse events.

This will be the opportunity for you to get familiar with the **MiniLibX**, to discover
or use the mathematical notion of **complex numbers**, to take a peek at the concept of
optimization in computer graphics and practice event handling.

### Mandatory part

| Program name | Turn in files      | Makefile                     | Arguments                                                     | External functs.                                                                                                                                                            | Libft authorized | Description                                                                                                    |
| ------------ | ------------------ | ---------------------------- | ------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------------- | -------------------------------------------------------------------------------------------------------------- |
| fractol      | Makefile, _.h, _.c | NAME, all, clean, fclean, re | The type of fractal to display and any other option available | open, close, read, write, All functions of the math library (-lm compiler option, man man 3 math), All functions of the MiniLibX and ft_printf and any equivalent YOU coded | Yes              | This project is about creating a small fractal exploration program. First, you have to know what a fractal is. |

Your project must comply with the following rules:

- You **must** use the **MiniLibX**. Either the version available on the school machines, or installing it using its sources.
- You have to turn in a Makefile which will compile your source files. It must not relink.
- Global variables are forbidden.

### Rendering

- Your program must offer the **Julia** set and the **Mandelbrot** set.

- The mouse wheel zooms in and out, almost infinitely (within the limits of the computer). This is the very principle of fractals.
- You must be able to create different Julia sets by passing different parameters to
  the program.
- A parameter is passed on the command line to define what type of fractal will be
  displayed in a window.
  - You can handle more parameters to use them as rendering options.
  - If no parameter is provided, or if the parameter is invalid, the program displays a list of available parameters and exits properly.
- You must use at least a few colors to show the depth of each fractal. It’s even better if you hack away on psychedelic effects.

### Graphic management

- Your program has to display the image in a window.
- The management of your window must remain smooth (changing to another window, minimizing, and so forth).
- Pressing ESC must close the window and quit the program in a clean way.
- Clicking on the cross on the window’s frame must close the window and quit the program in a clean way.
- The use of the images of the **MiniLibX** is mandatory.

### Bonus part

Usually, you would be encouraged to develop your own original extra features. However,
there will be much more interesting graphic projects later. They are waiting for you!!
Don’t lose too much time on this assignment!

You will get some extra points with the following features:

- One more different fractal (more than a hundred different types of fractals are referenced online).
- The zoom follows the actual mouse position.
- In addition to the zoom: moving the view by pressing the arrows keys.
- Make the color range shift.

```
The bonus part will only be assessed if the mandatory part is
PERFECT. Perfect means the mandatory part has been integrally done
and works without malfunctioning. If you have not passed ALL the
mandatory requirements, your bonus part will not be evaluated at all.
```
