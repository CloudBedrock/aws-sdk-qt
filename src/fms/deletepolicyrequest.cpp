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

#include "deletepolicyrequest.h"
#include "deletepolicyrequest_p.h"
#include "deletepolicyresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::DeletePolicyRequest
 *
 * \brief The DeletePolicyRequest class provides an interface for FMS DeletePolicy requests.
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
 * \sa FMSClient::deletePolicy
 */

/*!
 * @brief  Constructs a new DeletePolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeletePolicyRequest::DeletePolicyRequest(const DeletePolicyRequest &other)
    : FMSRequest(new DeletePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeletePolicyRequest object.
 */
DeletePolicyRequest::DeletePolicyRequest()
    : FMSRequest(new DeletePolicyRequestPrivate(FMSRequest::DeletePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePolicyRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeletePolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeletePolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  FMSClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeletePolicyResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeletePolicyRequestPrivate
 *
 * @brief  Private implementation for DeletePolicyRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeletePolicyRequestPrivate object.
 *
 * @param  action  FMS action being performed.
 * @param  q       Pointer to this object's public DeletePolicyRequest instance.
 */
DeletePolicyRequestPrivate::DeletePolicyRequestPrivate(
    const FMSRequest::Action action, DeletePolicyRequest * const q)
    : FMSRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeletePolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeletePolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeletePolicyRequest instance.
 */
DeletePolicyRequestPrivate::DeletePolicyRequestPrivate(
    const DeletePolicyRequestPrivate &other, DeletePolicyRequest * const q)
    : FMSRequestPrivate(other, q)
{

}

} // namespace FMS
} // namespace QtAws
