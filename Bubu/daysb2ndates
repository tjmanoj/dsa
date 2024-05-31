/* .Given two dates, find total number of days between them.*/
import java.util.Scanner;

public class DaysBetweenDates {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // Get first date input from the user
        System.out.println("Enter the first date (day month year):");
        int day1 = sc.nextInt();
        int month1 = sc.nextInt();
        int year1 = sc.nextInt();
        
        // Get second date input from the user
        System.out.println("Enter the second date (day month year):");
        int day2 = sc.nextInt();
        int month2 = sc.nextInt();
        int year2 = sc.nextInt();
        
        int daysBetween = getDaysBetweenDates(day1, month1, year1, day2, month2, year2);
        
        System.out.println("Number of days between the dates: " + daysBetween);
    }
    
    public static int getDaysBetweenDates(int day1, int month1, int year1, int day2, int month2, int year2) {
        // Days in each month (assuming non-leap years initially)
        int[] daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        // Count days from the start of each year to the given dates
        int days1 = dayOfYear(day1, month1, year1, daysInMonth);
        int days2 = dayOfYear(day2, month2, year2, daysInMonth);
        
        // If both dates are in the same year
        if (year1 == year2) {
            return days2 - days1;
        }
        
        // If the dates are in different years
        int daysInFirstYear = isLeapYear(year1) ? 366 : 365;
        int daysInLastYear = isLeapYear(year2) ? 366 : 365;
        
        // Days remaining in the first year
        int daysRemainingFirstYear = daysInFirstYear - days1;
        
        // Total days in the intervening years
        int totalDays = daysRemainingFirstYear + days2;
        
        // Add days for full years in between
        for (int year = year1 + 1; year < year2; year++) {
            totalDays += isLeapYear(year) ? 366 : 365;
        }
        
        return totalDays;
    }
    
    public static int dayOfYear(int day, int month, int year, int[] daysInMonth) {
        // Adjust for leap year
        if (isLeapYear(year)) {
            daysInMonth[1] = 29;
        }
        
        int dayOfYear = 0;
        for (int i = 0; i < month - 1; i++) {
            dayOfYear += daysInMonth[i];
        }
        dayOfYear += day;
        
        return dayOfYear;
    }
    
    public static boolean isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
}
