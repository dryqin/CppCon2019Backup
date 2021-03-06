#ifndef TEST_CLASS_H
#define TEST_CLASS_H

class TestClassForMultiArray
{
public:
	void calc(double x, double y)
	{
		result_ = x * y;
	}

	double operator()() const
	{
		return result_;
	}

private:
	double result_;
};


#endif // !TEST_CLASS_H

/*
	Copyright 2019 Daniel Hanson

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at

		http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.
*/


