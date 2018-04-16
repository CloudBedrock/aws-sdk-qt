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

#include "getpublickeyconfigrequest.h"
#include "getpublickeyconfigrequest_p.h"
#include "getpublickeyconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetPublicKeyConfigRequest
 *
 * \brief The GetPublicKeyConfigRequest class provides an interface for CloudFront GetPublicKeyConfig requests.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getPublicKeyConfig
 */

/*!
 * @brief  Constructs a new GetPublicKeyConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetPublicKeyConfigRequest::GetPublicKeyConfigRequest(const GetPublicKeyConfigRequest &other)
    : CloudFrontRequest(new GetPublicKeyConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetPublicKeyConfigRequest object.
 */
GetPublicKeyConfigRequest::GetPublicKeyConfigRequest()
    : CloudFrontRequest(new GetPublicKeyConfigRequestPrivate(CloudFrontRequest::GetPublicKeyConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetPublicKeyConfigRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetPublicKeyConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetPublicKeyConfigResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPublicKeyConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetPublicKeyConfigResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetPublicKeyConfigRequestPrivate
 *
 * @brief  Private implementation for GetPublicKeyConfigRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetPublicKeyConfigRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public GetPublicKeyConfigRequest instance.
 */
GetPublicKeyConfigRequestPrivate::GetPublicKeyConfigRequestPrivate(
    const CloudFrontRequest::Action action, GetPublicKeyConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetPublicKeyConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetPublicKeyConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetPublicKeyConfigRequest instance.
 */
GetPublicKeyConfigRequestPrivate::GetPublicKeyConfigRequestPrivate(
    const GetPublicKeyConfigRequestPrivate &other, GetPublicKeyConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
