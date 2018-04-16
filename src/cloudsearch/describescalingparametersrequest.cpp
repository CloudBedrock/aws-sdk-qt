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

#include "describescalingparametersrequest.h"
#include "describescalingparametersrequest_p.h"
#include "describescalingparametersresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DescribeScalingParametersRequest
 *
 * \brief The DescribeScalingParametersRequest class encapsulates CloudSearch DescribeScalingParameters requests.
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
 * \sa CloudSearchClient::describeScalingParameters
 */

/*!
 * @brief  Constructs a new DescribeScalingParametersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeScalingParametersRequest::DescribeScalingParametersRequest(const DescribeScalingParametersRequest &other)
    : CloudSearchRequest(new DescribeScalingParametersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeScalingParametersRequest object.
 */
DescribeScalingParametersRequest::DescribeScalingParametersRequest()
    : CloudSearchRequest(new DescribeScalingParametersRequestPrivate(CloudSearchRequest::DescribeScalingParametersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeScalingParametersRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeScalingParametersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeScalingParametersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudSearchClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeScalingParametersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeScalingParametersResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeScalingParametersRequestPrivate
 *
 * @brief  Private implementation for DescribeScalingParametersRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeScalingParametersRequestPrivate object.
 *
 * @param  action  CloudSearch action being performed.
 * @param  q       Pointer to this object's public DescribeScalingParametersRequest instance.
 */
DescribeScalingParametersRequestPrivate::DescribeScalingParametersRequestPrivate(
    const CloudSearchRequest::Action action, DescribeScalingParametersRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeScalingParametersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeScalingParametersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeScalingParametersRequest instance.
 */
DescribeScalingParametersRequestPrivate::DescribeScalingParametersRequestPrivate(
    const DescribeScalingParametersRequestPrivate &other, DescribeScalingParametersRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
