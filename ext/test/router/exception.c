
#ifdef HAVE_CONFIG_H
#include "ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"


/**
 * Test\Router\Exception
 *
 * Exceptions generated by the router
 */
ZEPHIR_INIT_CLASS(Test_Router_Exception) {

	ZEPHIR_REGISTER_CLASS_EX(Test\\Router, Exception, test, router_exception, zend_exception_get_default(TSRMLS_C), NULL, 0);


	return SUCCESS;

}

