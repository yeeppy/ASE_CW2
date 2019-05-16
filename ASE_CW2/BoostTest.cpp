#define BOOST_TEST_MODULE mytests
#include <boost/test/included/unit_test.hpp>
#include "rational.h"

using namespace ExactArithmetic;


Rational x, y;


BOOST_AUTO_TEST_CASE(additionTest)
{
	Rational x = Rational::Rational(2, 3);
	Rational y = Rational::Rational(1, 3);
	Rational result = 1;
	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((x + y), result);
}


BOOST_AUTO_TEST_CASE(subtractionTest)
{
	Rational x = Rational::Rational(2, 3);
	Rational y = Rational::Rational(1, 3);
	Rational result = Rational(1, 3);
	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((x - y), result);
}


BOOST_AUTO_TEST_CASE(multiplicationTest)
{
	Rational x = Rational::Rational(2, 3);
	Rational y = Rational::Rational(1, 3);
	Rational result = Rational(2, 9);
	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((x * y), result);
}


BOOST_AUTO_TEST_CASE(divisionTest)
{
	Rational x = Rational::Rational(2, 3);
	Rational y = Rational::Rational(1, 3);
	Rational result = 2;
	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((x / y), result);
}



BOOST_AUTO_TEST_CASE(simplificationTest)
{
	Rational test = Rational(2, 4);
	Rational result = Rational(1, 2);
	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL(test, result);
}

BOOST_AUTO_TEST_CASE(negetivenumberTest)
{
	Rational test = Rational(-2, 4);
	Rational result = Rational(-1, 2);
	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL(test, result);
}