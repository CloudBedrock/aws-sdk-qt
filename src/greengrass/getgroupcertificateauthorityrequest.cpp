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

#include "getgroupcertificateauthorityrequest.h"
#include "getgroupcertificateauthorityrequest_p.h"
#include "getgroupcertificateauthorityresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetGroupCertificateAuthorityRequest
 *
 * \brief The GetGroupCertificateAuthorityRequest class encapsulates Greengrass GetGroupCertificateAuthority requests.
 *
 * \ingroup Greengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::getGroupCertificateAuthority
 */

/*!
 * @brief  Constructs a new GetGroupCertificateAuthorityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetGroupCertificateAuthorityRequest::GetGroupCertificateAuthorityRequest(const GetGroupCertificateAuthorityRequest &other)
    : GreengrassRequest(new GetGroupCertificateAuthorityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetGroupCertificateAuthorityRequest object.
 */
GetGroupCertificateAuthorityRequest::GetGroupCertificateAuthorityRequest()
    : GreengrassRequest(new GetGroupCertificateAuthorityRequestPrivate(GreengrassRequest::GetGroupCertificateAuthorityAction, this))
{

}

/*!
 * \reimp
 */
bool GetGroupCertificateAuthorityRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetGroupCertificateAuthorityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetGroupCertificateAuthorityResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGroupCertificateAuthorityRequest::response(QNetworkReply * const reply) const
{
    return new GetGroupCertificateAuthorityResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetGroupCertificateAuthorityRequestPrivate
 *
 * @brief  Private implementation for GetGroupCertificateAuthorityRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetGroupCertificateAuthorityRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public GetGroupCertificateAuthorityRequest instance.
 */
GetGroupCertificateAuthorityRequestPrivate::GetGroupCertificateAuthorityRequestPrivate(
    const GreengrassRequest::Action action, GetGroupCertificateAuthorityRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetGroupCertificateAuthorityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetGroupCertificateAuthorityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetGroupCertificateAuthorityRequest instance.
 */
GetGroupCertificateAuthorityRequestPrivate::GetGroupCertificateAuthorityRequestPrivate(
    const GetGroupCertificateAuthorityRequestPrivate &other, GetGroupCertificateAuthorityRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
