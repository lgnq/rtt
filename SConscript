import os

src   = [Glob('src/*.c')]
src  += [Glob('*.s')]

inc   = [
    os.path.abspath('.'),
    os.path.abspath('./Inc'),
    os.path.abspath('./include')
]

group = {'src' : src, 'inc' : inc}

Return('group')
