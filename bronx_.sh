# P-UAE
#
# 2006-2011 Mustafa TUFAN (aka GnoStiC/BRONX)
#
# this is the main script to build (and test) PUAE
#
base=" --with-sdl --with-sdl-gl --with-sdl-gfx --with-sdl-sound --enable-drvsnd "
wiqt=" "
cd32=" --enable-cd32 "
a600=" --enable-gayle "
scsi=" --enable-scsi-device --enable-ncr --enable-a2091 "
other=" --with-caps --enable-amax "
#
#
./bootstrap.sh
./configure $base $wiqt $cd32 $a600 $scsi $other
make clean
make
