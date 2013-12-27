#ifndef NAMESPACE_H_
#define NAMESPACE_H_

namespace SALES
{

	class Sales
	{

		private:
			const static int QUARTERS = 4;
			double sales[QUARTERS];
			double m_average;
			double m_max;
			double m_min;

		public:
			Sales(const double ar[], int n);
			void setSales();
			void showSales() const;
		
	};

}

#endif