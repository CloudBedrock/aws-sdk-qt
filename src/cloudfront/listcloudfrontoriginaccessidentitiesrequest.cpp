/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listcloudfrontoriginaccessidentitiesrequest.h"
#include "listcloudfrontoriginaccessidentitiesrequest_p.h"
#include "listcloudfrontoriginaccessidentitiesresponse.h"
#include "cloudfrontrequest_p.h"

namespace AWS {
namespace CloudFront {

/**
 * @class  ListCloudFrontOriginAccessIdentitiesRequest
 *
 * @brief  Implements CloudFront ListCloudFrontOriginAccessIdentities requests.
 *
 * @see    CloudFrontClient::listCloudFrontOriginAccessIdentities
 */

/**
 * @brief  Constructs a new ListCloudFrontOriginAccessIdentitiesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListCloudFrontOriginAccessIdentitiesRequest::ListCloudFrontOriginAccessIdentitiesRequest(const ListCloudFrontOriginAccessIdentitiesRequest &other)
    : CloudFrontRequest(new ListCloudFrontOriginAccessIdentitiesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListCloudFrontOriginAccessIdentitiesRequest object.
 */
ListCloudFrontOriginAccessIdentitiesRequest::ListCloudFrontOriginAccessIdentitiesRequest()
    : CloudFrontRequest(new ListCloudFrontOriginAccessIdentitiesRequestPrivate(CloudFrontRequest::ListCloudFrontOriginAccessIdentitiesAction, this))
{

}

bool ListCloudFrontOriginAccessIdentitiesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListCloudFrontOriginAccessIdentitiesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListCloudFrontOriginAccessIdentitiesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
AwsAbstractResponse * ListCloudFrontOriginAccessIdentitiesRequest::response(QNetworkReply * const reply) const
{
    return new ListCloudFrontOriginAccessIdentitiesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListCloudFrontOriginAccessIdentitiesRequestPrivate
 *
 * @brief  Private implementation for ListCloudFrontOriginAccessIdentitiesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCloudFrontOriginAccessIdentitiesRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public ListCloudFrontOriginAccessIdentitiesRequest instance.
 */
ListCloudFrontOriginAccessIdentitiesRequestPrivate::ListCloudFrontOriginAccessIdentitiesRequestPrivate(
    const CloudFrontRequest::Action action, ListCloudFrontOriginAccessIdentitiesRequest * const q)
    : ListCloudFrontOriginAccessIdentitiesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListCloudFrontOriginAccessIdentitiesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListCloudFrontOriginAccessIdentitiesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListCloudFrontOriginAccessIdentitiesRequest instance.
 */
ListCloudFrontOriginAccessIdentitiesRequestPrivate::ListCloudFrontOriginAccessIdentitiesRequestPrivate(
    const ListCloudFrontOriginAccessIdentitiesRequestPrivate &other, ListCloudFrontOriginAccessIdentitiesRequest * const q)
    : ListCloudFrontOriginAccessIdentitiesPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace AWS
