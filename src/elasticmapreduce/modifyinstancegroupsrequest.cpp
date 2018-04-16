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

#include "modifyinstancegroupsrequest.h"
#include "modifyinstancegroupsrequest_p.h"
#include "modifyinstancegroupsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::ModifyInstanceGroupsRequest
 *
 * \brief The ModifyInstanceGroupsRequest class provides an interface for EMR ModifyInstanceGroups requests.
 *
 * \ingroup EMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EMRClient::modifyInstanceGroups
 */

/*!
 * @brief  Constructs a new ModifyInstanceGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyInstanceGroupsRequest::ModifyInstanceGroupsRequest(const ModifyInstanceGroupsRequest &other)
    : EMRRequest(new ModifyInstanceGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ModifyInstanceGroupsRequest object.
 */
ModifyInstanceGroupsRequest::ModifyInstanceGroupsRequest()
    : EMRRequest(new ModifyInstanceGroupsRequestPrivate(EMRRequest::ModifyInstanceGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyInstanceGroupsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ModifyInstanceGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyInstanceGroupsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EMRClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyInstanceGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ModifyInstanceGroupsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ModifyInstanceGroupsRequestPrivate
 *
 * @brief  Private implementation for ModifyInstanceGroupsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ModifyInstanceGroupsRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public ModifyInstanceGroupsRequest instance.
 */
ModifyInstanceGroupsRequestPrivate::ModifyInstanceGroupsRequestPrivate(
    const EMRRequest::Action action, ModifyInstanceGroupsRequest * const q)
    : EMRRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ModifyInstanceGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyInstanceGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyInstanceGroupsRequest instance.
 */
ModifyInstanceGroupsRequestPrivate::ModifyInstanceGroupsRequestPrivate(
    const ModifyInstanceGroupsRequestPrivate &other, ModifyInstanceGroupsRequest * const q)
    : EMRRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
