function numTeams(rating: number[]): number {
    let rateLen: number = rating.length, teams: number = 0;
    teams += bruteForce(rateLen, rating);
    rating = rating.reverse()
    teams += bruteForce(rateLen, rating);
    return teams;
};

function bruteForce(n: number, rating: number[]) {
    let count: number = 0;
    for (let i: number = 0; i < n - 2; ++i) {
        for (let j: number = i + 1; j < n - 1; ++j) {
          if (rating[i] < rating[j]) {
            for (let k: number = j + 1; k < n; ++k) {
              if (rating[j] < rating[k]) {
                ++count
              }
            }
          }
        }
      }
      return count
}