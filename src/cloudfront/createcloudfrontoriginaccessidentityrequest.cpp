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

#include "createcloudfrontoriginaccessidentityrequest.h"
#include "createcloudfrontoriginaccessidentityrequest_p.h"
#include "createcloudfrontoriginaccessidentityresponse.h"
#include "cloudfrontrequest_p.h"

namespace AWS {
namespace CloudFront {

/**
 * @class  CreateCloudFrontOriginAccessIdentityRequest
 *
 * @brief  Implements CloudFront CreateCloudFrontOriginAccessIdentity requests.
 *
 * @see    CloudFrontClient::createCloudFrontOriginAccessIdentity
 */

/**
 * @brief  Constructs a new CreateCloudFrontOriginAccessIdentityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCloudFrontOriginAccessIdentityResponse::CreateCloudFrontOriginAccessIdentityResponse(

/**
 * @brief  Constructs a new CreateCloudFrontOriginAccessIdentityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateCloudFrontOriginAccessIdentityRequest::CreateCloudFrontOriginAccessIdentityRequest(const CreateCloudFrontOriginAccessIdentityRequest &other)
    : CloudFrontRequest(new CreateCloudFrontOriginAccessIdentityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateCloudFrontOriginAccessIdentityRequest object.
 */
CreateCloudFrontOriginAccessIdentityRequest::CreateCloudFrontOriginAccessIdentityRequest()
    : CloudFrontRequest(new CreateCloudFrontOriginAccessIdentityRequestPrivate(CloudFrontRequest::CreateCloudFrontOriginAccessIdentityAction, this))
{

}

bool CreateCloudFrontOriginAccessIdentityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateCloudFrontOriginAccessIdentityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateCloudFrontOriginAccessIdentityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
AwsAbstractResponse * CreateCloudFrontOriginAccessIdentityRequest::response(QNetworkReply * const reply) const
{
    return new CreateCloudFrontOriginAccessIdentityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateCloudFrontOriginAccessIdentityRequestPrivate
 *
 * @brief  Private implementation for CreateCloudFrontOriginAccessIdentityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCloudFrontOriginAccessIdentityRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public CreateCloudFrontOriginAccessIdentityRequest instance.
 */
CreateCloudFrontOriginAccessIdentityRequestPrivate::CreateCloudFrontOriginAccessIdentityRequestPrivate(
    const CloudFrontRequest::Action action, CreateCloudFrontOriginAccessIdentityRequest * const q)
    : CreateCloudFrontOriginAccessIdentityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateCloudFrontOriginAccessIdentityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateCloudFrontOriginAccessIdentityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateCloudFrontOriginAccessIdentityRequest instance.
 */
CreateCloudFrontOriginAccessIdentityRequestPrivate::CreateCloudFrontOriginAccessIdentityRequestPrivate(
    const CreateCloudFrontOriginAccessIdentityRequestPrivate &other, CreateCloudFrontOriginAccessIdentityRequest * const q)
    : CreateCloudFrontOriginAccessIdentityPrivate(other, q)
{

}
