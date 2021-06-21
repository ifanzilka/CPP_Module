class Awesome {
	public:
			Awesome( int n ) : _n( n ) {}
			bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
			bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
			bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
			bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
			bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
			bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
			int	getN() const {return _n;}
	private:
			int _n;
};