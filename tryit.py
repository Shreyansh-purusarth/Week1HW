from uwimg import *

class Week1Check():
    def __init__(self):
        self.image = load_image("data/dog.jpg")

# 1. Getting and setting pixels
    def get_set_pixel(self):
        im = self.image
        for row in range(im.h):
            for col in range(im.w):
                set_pixel(im, col, row, 0, 0)
        save_image(im, "dog_no_red")

# 3. Grayscale image
    def grayscale_image(self):
        graybar = rgb_to_grayscale(self.image)
        save_image(graybar, "gray_dog")

# 4. Shift Image
    def shift_image(self):
        shift_image(im, 0, .4)
        shift_image(im, 1, .4)
        shift_image(im, 2, .4)
        save_image(im, "overflow_shifted_image")

# 5. Clamp Image 
    def clamp_image(self):
        im = clamp_image(self.image)
        save_image(im, "fixed")


# 6-7. Colorspace and saturation
    def colorspace_change(self):
        rgb_to_hsv(im)
        shift_image(im, 1, .2)
        hsv_to_rgb(im)
        save_image(im, "dog_saturated")

if __name__ == "__main__":

    # NOW CHECK IF RUNNING THESE MEHODS GIVE YOU THE RESULT
    image_object = Week1Check()
    image_object.get_set_pixel()
    image_object.grayscale_image()
    image_object.shift_image()
    image_object.colorspace_change()