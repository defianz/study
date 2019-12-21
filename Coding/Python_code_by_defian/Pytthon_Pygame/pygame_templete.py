# Pygame template - skeleton for a new pygame project

import pygame
import random


WIDTH = 360
HEIGHT = 480
FPS = 30

# define colors
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
RED = (255, 0, 0)
GREEN = (0, 255, 0)
BLUE = (0, 0, 255)


# image
game_folder = os.path.dirname(__file__)
img_folder = os.path.join(game_folder, "img")

# initialize pygame and create window
pygame.init()
pygame.mixer.init()
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("형철이의_ My Game")
clock = pygame.time.Clock()

all_sprite = pygame.sprite.Group()


# Game loop

running = True
while running:
    # keep loop
    clock.tick(FPS)
    # Process input (events)
    for event in pygame.event.get():
        # check for closing window
        if event.type == pygame.QUIT:
            running = False
    # Update
    all_sprite.update()

    # Draw / render
    screen.fill(BLACK)
    all_sprite.draw(screen)
    # *after* drawing everything , flip the display
    pygame.display.flip()

pygame.quit()
