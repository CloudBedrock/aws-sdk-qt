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

#include "getcloudfrontoriginaccessidentityconfigrequest.h"
#include "getcloudfrontoriginaccessidentityconfigrequest_p.h"
#include "getcloudfrontoriginaccessidentityconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetCloudFrontOriginAccessIdentityConfigRequest
 *
 * \brief The GetCloudFrontOriginAccessIdentityConfigRequest class provides an interface for CloudFront GetCloudFrontOriginAccessIdentityConfig requests.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getCloudFrontOriginAccessIdentityConfig
 */

/*!
 * @brief  Constructs a new GetCloudFrontOriginAccessIdentityConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCloudFrontOriginAccessIdentityConfigRequest::GetCloudFrontOriginAccessIdentityConfigRequest(const GetCloudFrontOriginAccessIdentityConfigRequest &other)
    : CloudFrontRequest(new GetCloudFrontOriginAccessIdentityConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetCloudFrontOriginAccessIdentityConfigRequest object.
 */
GetCloudFrontOriginAccessIdentityConfigRequest::GetCloudFrontOriginAccessIdentityConfigRequest()
    : CloudFrontRequest(new GetCloudFrontOriginAccessIdentityConfigRequestPrivate(CloudFrontRequest::GetCloudFrontOriginAccessIdentityConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetCloudFrontOriginAccessIdentityConfigRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetCloudFrontOriginAccessIdentityConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCloudFrontOriginAccessIdentityConfigResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCloudFrontOriginAccessIdentityConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetCloudFrontOriginAccessIdentityConfigResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetCloudFrontOriginAccessIdentityConfigRequestPrivate
 *
 * @brief  Private implementation for GetCloudFrontOriginAccessIdentityConfigRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetCloudFrontOriginAccessIdentityConfigRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public GetCloudFrontOriginAccessIdentityConfigRequest instance.
 */
GetCloudFrontOriginAccessIdentityConfigRequestPrivate::GetCloudFrontOriginAccessIdentityConfigRequestPrivate(
    const CloudFrontRequest::Action action, GetCloudFrontOriginAccessIdentityConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetCloudFrontOriginAccessIdentityConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCloudFrontOriginAccessIdentityConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCloudFrontOriginAccessIdentityConfigRequest instance.
 */
GetCloudFrontOriginAccessIdentityConfigRequestPrivate::GetCloudFrontOriginAccessIdentityConfigRequestPrivate(
    const GetCloudFrontOriginAccessIdentityConfigRequestPrivate &other, GetCloudFrontOriginAccessIdentityConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
