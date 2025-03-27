void trackPlayerRanks (int leader_board_score[] , int leader_board_size , int score_after_each_game[] ,int games_played, int ranking_after_each_round[]){
    for(int i = 1 ; i < leader_board_size ; i++){
        if(leader_board_score[i] == leader_board_score[i-1]){
            for(int j = i ; j < leader_board_size - 1 ; j++){
                leader_board_score[j] = leader_board_score[j+1];
            }
        }
    }
    for(int i = 0 ; i < leader_board_size ; i++){
        for(int j = 0 ; j < leader_board_size; j++){
            if(score_after_each_game[i] >= leader_board_score[j]){
                ranking_after_each_round[i] = j ;
                return ;
            }
        }
    }
    return ;
}