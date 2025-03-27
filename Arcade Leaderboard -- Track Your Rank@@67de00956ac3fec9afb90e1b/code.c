void trackPlayerRanks (int leader_board_rankings[] , int leader_board_size , int score_after_each_game[] ,int games_played, int ranking_after_each_round[]){
    for(int i = 0 ; i < leader_board_size ; i++){
        for(int j = 0 ; j < leader_board_size; j++){
            if(score_after_each_game[i] >= leader_board_rankings[j]){
                ranking_after_each_round[i] = j ;
                return ;
            }
        }
    }
    return ;
}