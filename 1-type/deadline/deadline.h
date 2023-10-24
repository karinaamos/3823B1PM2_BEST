int get_score(short score, int start, int stop, int now) {
    if (start>=now)
        return score;
    if ((now>start)&&(now<stop))
        return (score-((now-start)*score)/(2*(stop-start)));
    if (now>=stop){
        if (score%2==1)
            return (score/2)+1;
        else
            return score/2;
    }
}