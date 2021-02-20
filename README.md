# OhMyKey
For one of my C# projects, I needed to emulate a keystroke. 
I googled this question, but I could not find a simple library for this. 
But, I found how to do it in C ++, and after 30 minutes I copied the code from different places, like StackOverflow, and I got a simple .dll to emulate a key press.

Usage example (C#):

        [DllImport("OhMyKey.dll", EntryPoint = "EMULATE")]
        public static extern int emulate_key(int key_hex);
        
        public void mediaPlayPause()
        {
            emulate_key(0xB3); // 0xB3 - HEX code for VK_MEDIA_PLAY_PAUSE
        }
