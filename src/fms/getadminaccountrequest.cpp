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

#include "getadminaccountrequest.h"
#include "getadminaccountrequest_p.h"
#include "getadminaccountresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::GetAdminAccountRequest
 *
 * \brief The GetAdminAccountRequest class provides an interface for FMS GetAdminAccount requests.
 *
 * \ingroup FMS
 *
 *  <fullname>AWS Firewall Manager</fullname>
 * 
 *  This is the <i>AWS Firewall Manager API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Firewall Manager API actions, data types, and errors. For detailed information about AWS Firewall Manager
 *  features, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
 *
 * \sa FMSClient::getAdminAccount
 */

/*!
 * @brief  Constructs a new GetAdminAccountRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetAdminAccountRequest::GetAdminAccountRequest(const GetAdminAccountRequest &other)
    : FMSRequest(new GetAdminAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetAdminAccountRequest object.
 */
GetAdminAccountRequest::GetAdminAccountRequest()
    : FMSRequest(new GetAdminAccountRequestPrivate(FMSRequest::GetAdminAccountAction, this))
{

}

/*!
 * \reimp
 */
bool GetAdminAccountRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetAdminAccountResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetAdminAccountResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  FMSClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAdminAccountRequest::response(QNetworkReply * const reply) const
{
    return new GetAdminAccountResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetAdminAccountRequestPrivate
 *
 * @brief  Private implementation for GetAdminAccountRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetAdminAccountRequestPrivate object.
 *
 * @param  action  FMS action being performed.
 * @param  q       Pointer to this object's public GetAdminAccountRequest instance.
 */
GetAdminAccountRequestPrivate::GetAdminAccountRequestPrivate(
    const FMSRequest::Action action, GetAdminAccountRequest * const q)
    : FMSRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetAdminAccountRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetAdminAccountRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetAdminAccountRequest instance.
 */
GetAdminAccountRequestPrivate::GetAdminAccountRequestPrivate(
    const GetAdminAccountRequestPrivate &other, GetAdminAccountRequest * const q)
    : FMSRequestPrivate(other, q)
{

}

} // namespace FMS
} // namespace QtAws
