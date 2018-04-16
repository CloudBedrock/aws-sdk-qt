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

#include "describeelasticsearchdomainconfigrequest.h"
#include "describeelasticsearchdomainconfigrequest_p.h"
#include "describeelasticsearchdomainconfigresponse.h"
#include "elasticsearchservicerequest_p.h"

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::DescribeElasticsearchDomainConfigRequest
 *
 * \brief The DescribeElasticsearchDomainConfigRequest class provides an interface for ElasticsearchService DescribeElasticsearchDomainConfig requests.
 *
 * \ingroup ElasticsearchService
 *
 *  <fullname>Amazon Elasticsearch Configuration Service</fullname>
 * 
 *  Use the Amazon Elasticsearch configuration API to create, configure, and manage Elasticsearch
 * 
 *  domains>
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticsearch-service-regions" target="_blank">Regions and
 *
 * \sa ElasticsearchServiceClient::describeElasticsearchDomainConfig
 */

/*!
 * @brief  Constructs a new DescribeElasticsearchDomainConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeElasticsearchDomainConfigRequest::DescribeElasticsearchDomainConfigRequest(const DescribeElasticsearchDomainConfigRequest &other)
    : ElasticsearchServiceRequest(new DescribeElasticsearchDomainConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeElasticsearchDomainConfigRequest object.
 */
DescribeElasticsearchDomainConfigRequest::DescribeElasticsearchDomainConfigRequest()
    : ElasticsearchServiceRequest(new DescribeElasticsearchDomainConfigRequestPrivate(ElasticsearchServiceRequest::DescribeElasticsearchDomainConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeElasticsearchDomainConfigRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeElasticsearchDomainConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeElasticsearchDomainConfigResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticsearchServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeElasticsearchDomainConfigRequest::response(QNetworkReply * const reply) const
{
    return new DescribeElasticsearchDomainConfigResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeElasticsearchDomainConfigRequestPrivate
 *
 * @brief  Private implementation for DescribeElasticsearchDomainConfigRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeElasticsearchDomainConfigRequestPrivate object.
 *
 * @param  action  ElasticsearchService action being performed.
 * @param  q       Pointer to this object's public DescribeElasticsearchDomainConfigRequest instance.
 */
DescribeElasticsearchDomainConfigRequestPrivate::DescribeElasticsearchDomainConfigRequestPrivate(
    const ElasticsearchServiceRequest::Action action, DescribeElasticsearchDomainConfigRequest * const q)
    : ElasticsearchServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeElasticsearchDomainConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeElasticsearchDomainConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeElasticsearchDomainConfigRequest instance.
 */
DescribeElasticsearchDomainConfigRequestPrivate::DescribeElasticsearchDomainConfigRequestPrivate(
    const DescribeElasticsearchDomainConfigRequestPrivate &other, DescribeElasticsearchDomainConfigRequest * const q)
    : ElasticsearchServiceRequestPrivate(other, q)
{

}

} // namespace ElasticsearchService
} // namespace QtAws
