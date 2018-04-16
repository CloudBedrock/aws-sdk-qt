/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeserviceaccesspoliciesrequest.h"
#include "describeserviceaccesspoliciesrequest_p.h"
#include "describeserviceaccesspoliciesresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DescribeServiceAccessPoliciesRequest
 *
 * \brief The DescribeServiceAccessPoliciesRequest class provides an interface for CloudSearch DescribeServiceAccessPolicies requests.
 *
 * \ingroup CloudSearch
 *
 *  <fullname>Amazon CloudSearch Configuration Service</fullname>
 * 
 *  You use the Amazon CloudSearch configuration service to create, configure, and manage search domains. Configuration
 *  service requests are submitted using the AWS Query protocol. AWS Query requests are HTTP or HTTPS requests submitted via
 *  HTTP GET or POST with a query parameter named
 * 
 *  Action>
 * 
 *  The endpoint for configuration service requests is region-specific: cloudsearch.<i>region</i>.amazonaws.com. For
 *  example, cloudsearch.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#cloudsearch_region" target="_blank">Regions and
 *
 * \sa CloudSearchClient::describeServiceAccessPolicies
 */

/*!
 * @brief  Constructs a new DescribeServiceAccessPoliciesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeServiceAccessPoliciesRequest::DescribeServiceAccessPoliciesRequest(const DescribeServiceAccessPoliciesRequest &other)
    : CloudSearchRequest(new DescribeServiceAccessPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeServiceAccessPoliciesRequest object.
 */
DescribeServiceAccessPoliciesRequest::DescribeServiceAccessPoliciesRequest()
    : CloudSearchRequest(new DescribeServiceAccessPoliciesRequestPrivate(CloudSearchRequest::DescribeServiceAccessPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeServiceAccessPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeServiceAccessPoliciesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeServiceAccessPoliciesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudSearchClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeServiceAccessPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeServiceAccessPoliciesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeServiceAccessPoliciesRequestPrivate
 *
 * @brief  Private implementation for DescribeServiceAccessPoliciesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeServiceAccessPoliciesRequestPrivate object.
 *
 * @param  action  CloudSearch action being performed.
 * @param  q       Pointer to this object's public DescribeServiceAccessPoliciesRequest instance.
 */
DescribeServiceAccessPoliciesRequestPrivate::DescribeServiceAccessPoliciesRequestPrivate(
    const CloudSearchRequest::Action action, DescribeServiceAccessPoliciesRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeServiceAccessPoliciesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeServiceAccessPoliciesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeServiceAccessPoliciesRequest instance.
 */
DescribeServiceAccessPoliciesRequestPrivate::DescribeServiceAccessPoliciesRequestPrivate(
    const DescribeServiceAccessPoliciesRequestPrivate &other, DescribeServiceAccessPoliciesRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
