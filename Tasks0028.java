import java.util.Scanner;

class Tasks0028 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String teamName[] = new String[4];
        int teamScore[][] = new int[4][4];

        for (int i = 0; i < 4; i++) {
            teamName[i] = in.nextLine();
        }
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                teamScore[i][j] = in.nextInt();
            }
        }

        for (int i = 0; i < 4; i++) {
            
            for (int j = i + 1; j < 4; j++) {
                if (teamScore[i][j] > teamScore[j][i]) {
                    teamScore[i][i] += 3;
                } else if (teamScore[i][j] == teamScore[j][i]) {
                    teamScore[i][i]++;
                    teamScore[j][j]++;
                } else {
                    teamScore[j][j] += 3;
                }
            }
        }

        for (int i = 0; i < 4; i++) {
            int point = i;
            for (int j = 0; j < 4; j++) {
                if (teamScore[point][point] < 0 || teamScore[j][j] < 0 || point == j) {
                    continue;
                }
                
                System.out.printf("this is i : (%d) and j : (%d)%n", i, j);
                if (teamScore[point][point] > teamScore[j][j]) {
                    
                    System.out.println(teamName[point] + " " + teamScore[point][point]);
                    teamScore[point][point] = -1;
                } else 
                if (teamScore[point][point] == teamScore[j][j]) {
                    
                    int sumGoal1 = 0, sumGoal2 = 0, sumLost1 = 0, sumLost2 = 0;
                    for (int k = 0; k < 4; k++) {
                        sumGoal1 += teamScore[point][k];
                        sumGoal2 += teamScore[j][k];
                        sumLost1 += teamScore[k][point];
                        sumLost2 += teamScore[k][j];
                    }
                    sumGoal1 -= teamScore[point][point];
                    sumGoal2 -= teamScore[j][j];
                    sumLost1 -= teamScore[point][point];
                    sumLost2 -= teamScore[j][j];

                    if (sumGoal1 - sumLost1 > sumGoal2 - sumLost2) {
                        System.out.println(teamName[point] + " " + teamScore[point][point]);
                        teamScore[point][point] = -1;
                    } else 
                    if (sumGoal1 - sumLost1 < sumGoal2 - sumLost2) {
                        System.out.println(teamName[j] + " " + teamScore[j][j]);
                        teamScore[j][j] = -1;
                    } else {
                        if (sumGoal1 > sumGoal2) {
                            System.out.println(teamName[point] + " " + teamScore[point][point]);
                            teamScore[point][point] = -1;
                        } else {
                            System.out.println(teamName[j] + " " + teamScore[j][j]);
                            teamScore[j][j] = -1;
                        }
                    }
                } else {
                    point = j;
                    System.out.println(teamName[j] + " " + teamScore[j][j]);
                    teamScore[j][j] = -1;
                }
            }
            System.out.println(teamName[point] + " " + teamScore[point][point]);
        }

        for (int i = 0; i < 4; i++) {
            if (teamScore[i][i] >= 0)
            System.out.println(teamName[i] + " " + teamScore[i][i]);
        }
    }
}