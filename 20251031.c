int main()
{
    int k;
    printf("昨晩は何時間寝れましたか？");
    scanf("%d",&k);
    
    if(k >= 12)
    {
        printf("あなたは寝すぎです");
    }
    
    else if(k>=8)
    {
        printf("健康的な睡眠時間です");
    }
    else
    {
        printf("あなたは不眠症です");
    }

    return 0;
}