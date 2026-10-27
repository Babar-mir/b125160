#include <iostream>
using namespace std;

class Recommender {
public:
    virtual double generateRecommendation(int userRating, int popularity) { return 0; }
    virtual ~Recommender() {}
};
class PersonalizedRecommender : public Recommender {
public:
    double generateRecommendation(int userRating, int popularity) override {
        return 0.7 * userRating + 0.3 * popularity;
    }
};
class TrendingRecommender : public Recommender {
public:
    double generateRecommendation(int userRating, int popularity) override {
        return 0.3 * userRating + 0.7 * popularity;
    }
};

int main() {
    int rating, pop;
    do {
        cout << "Enter user rating (0-100): "; cin >> rating;
        cout << "Enter popularity (0-100): "; cin >> pop;
        if (rating < 0 || rating > 100 || pop < 0 || pop > 100)
            cout << "Invalid! Both values must be between 0 and 100.\n";
    } while (rating < 0 || rating > 100 || pop < 0 || pop > 100);
    Recommender *r1 = new PersonalizedRecommender();
    Recommender *r2 = new TrendingRecommender();
    cout << "Personalized score: " << r1->generateRecommendation(rating, pop) << endl;
    cout << "Trending score    : " << r2->generateRecommendation(rating, pop) << endl;
    delete r1; delete r2;
    return 0;
}