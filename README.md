# iRobot Create Board Core

This is my first, and probably last attempt to write a board core.  
The original iRobot Create with command module has an atmega168 micro-controller.  
And can be programmed in C/C++, and of course with a little work, the Arduino IDE  
This was/is an attempt to make it a bit easier to use.  
It is NOT complete, it has only been tested using a linux machine (Linux Mint 20.3 seems to work, while Linux Mint 21.2 does not)  
And only tested with the Arduino 1.8.19 IDE  

THERE IS NO GUARNTEE THIS WILL WORK AT ALL  

I started work on this a couple of years ago (2020 - 2021 maybe), this is very low priority in my life right now, and as such - I probably will not get back to work on it any time soon.  

It's my hopes that it will make a good base for someone else, and my hope that it is useful for something.  

As I said, this appears to work on one of my machines, but not the other, And as far as I can tell there is no reason for this - everything looks correctly installed, everything appears to be the same between the two version, yet one works and the other gives library requirement errors.  

You are on your own, I have no idea how to fix this.  
Hopefully it is useful thou.  

## Installation

Copy the irobot directory, to your Arduino hardware directory - this should be in the Arduino directory in your My Documents folder or Home folder if you are using Linux.  
If the hardware directory isn't there, just create it.  And copy the irobot directory to it.  
Restart the IDE and you should see iRobot Command Module in the board list.  

## Things To Do

## Contributing

1. Fork it!
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am 'Add some feature'`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request

## Support Me

If you find this or any of my projects useful or enjoyable please support me.  
Anything I do get goes to buy more parts and make more/better projects.  

https://ko-fi.com/lfmiller  
https://www.paypal.me/KD8BXP  

## Other Projects

https://kd8bxp.blogspot.com/  
https://www.instructables.com/member/kd8bxp/  

## Social Media

https://mastodon.radio/@kd8bxp  
https://diode.zone/a/kd8bxp/video-channels  
https://bsky.app/profile/kd8bxp.bsky.social  

## Credits

Copyright (c) 2021 LeRoy Miller

## License

This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses>
