# coding: utf-8

"""
    OpenAPI Petstore

    This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\  # noqa: E501

    The version of the OpenAPI document: 1.0.0
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import
import sys
import unittest

import petstore_api
from petstore_api.model.additional_properties_boolean import AdditionalPropertiesBoolean


class TestAdditionalPropertiesBoolean(unittest.TestCase):
    """AdditionalPropertiesBoolean unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def testAdditionalPropertiesBoolean(self):
        """Test AdditionalPropertiesBoolean"""
        # can make model without additional properties
        model = AdditionalPropertiesBoolean()

        # can make one with additional properties
        model = AdditionalPropertiesBoolean(some_key=True)
        assert model['some_key'] == True

        # type checking works on additional properties
        with self.assertRaises(petstore_api.ApiTypeError) as exc:
            model = AdditionalPropertiesBoolean(some_key='True')


if __name__ == '__main__':
    unittest.main()