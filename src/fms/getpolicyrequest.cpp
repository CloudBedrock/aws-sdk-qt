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

#include "getpolicyrequest.h"
#include "getpolicyrequest_p.h"
#include "getpolicyresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::GetPolicyRequest
 *
 * \brief The GetPolicyRequest class provides an interface for FMS GetPolicy requests.
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
 * \sa FMSClient::getPolicy
 */

/*!
 * @brief  Constructs a new GetPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetPolicyRequest::GetPolicyRequest(const GetPolicyRequest &other)
    : FMSRequest(new GetPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetPolicyRequest object.
 */
GetPolicyRequest::GetPolicyRequest()
    : FMSRequest(new GetPolicyRequestPrivate(FMSRequest::GetPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetPolicyRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  FMSClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetPolicyResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetPolicyRequestPrivate
 *
 * @brief  Private implementation for GetPolicyRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetPolicyRequestPrivate object.
 *
 * @param  action  FMS action being performed.
 * @param  q       Pointer to this object's public GetPolicyRequest instance.
 */
GetPolicyRequestPrivate::GetPolicyRequestPrivate(
    const FMSRequest::Action action, GetPolicyRequest * const q)
    : FMSRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetPolicyRequest instance.
 */
GetPolicyRequestPrivate::GetPolicyRequestPrivate(
    const GetPolicyRequestPrivate &other, GetPolicyRequest * const q)
    : FMSRequestPrivate(other, q)
{

}

} // namespace FMS
} // namespace QtAws
