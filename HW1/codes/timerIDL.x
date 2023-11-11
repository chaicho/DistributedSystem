program TIMER_PROG {
    version TIME_VERS {
        long GET_TIME(void) = 1;
        void SET_TIME(long) = 2;
    } = 1;
} = 0x20000001;
