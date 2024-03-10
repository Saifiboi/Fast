#include "main.cpp"
#include <gtest/gtest.h>

//Question 2
TEST(rectangle, first) {
	rectangle r;
	int l = 20, w = 20;
	r.setLength(l);
	r.setWidth(w);

	//EXPECT_EQ(r.InputValues(l, w));
	EXPECT_EQ(400, r.area(l, w));
	EXPECT_EQ(42, r.scaleup(l, w));

}


//Question 3
point p1;
point p2(1,-1);// parametrized 
TEST(point, first){
	p1.setX(-1);
	p1.setY(-1);
	EXPECT_EQ(-1, p1.getX());
	EXPECT_EQ("Q3",p1.check());

}



//Question 4
park par(40, 20,1101); 
//parametrized const has capicity price and first ticket number  (other will generated auto)
TEST(park, first){
	par.buyTicket(2);// 	
	EXPECT_EQ(38, par.seatCapacity());
	par.exitPark(1);
	EXPECT_EQ(39, par.seatCapacity());
	par.buyTicket(5);// 
	EXPECT_EQ(140, par.getTotal());


}
// Question 5
TEST(Date, Classes1){
    Date date1;
    Date date2(2,3,2024);
    Date date3(5,3,2024);
    bool answer = date1.LeapYear(date2);
    int days = date1.SubtractDate(date3,date2);
    EXPECT_TRUE(answer);
    EXPECT_EQ(3,days);
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
	
    return RUN_ALL_TESTS();
}
