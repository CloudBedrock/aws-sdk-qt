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

#include "modifyinstancefleetrequest.h"
#include "modifyinstancefleetrequest_p.h"
#include "modifyinstancefleetresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::ModifyInstanceFleetRequest
 *
 * \brief The ModifyInstanceFleetRequest class encapsulates EMR ModifyInstanceFleet requests.
 *
 * \ingroup EMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EMRClient::modifyInstanceFleet
 */

/*!
 * @brief  Constructs a new ModifyInstanceFleetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyInstanceFleetRequest::ModifyInstanceFleetRequest(const ModifyInstanceFleetRequest &other)
    : EMRRequest(new ModifyInstanceFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ModifyInstanceFleetRequest object.
 */
ModifyInstanceFleetRequest::ModifyInstanceFleetRequest()
    : EMRRequest(new ModifyInstanceFleetRequestPrivate(EMRRequest::ModifyInstanceFleetAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyInstanceFleetRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ModifyInstanceFleetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyInstanceFleetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EMRClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyInstanceFleetRequest::response(QNetworkReply * const reply) const
{
    return new ModifyInstanceFleetResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ModifyInstanceFleetRequestPrivate
 *
 * @brief  Private implementation for ModifyInstanceFleetRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ModifyInstanceFleetRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public ModifyInstanceFleetRequest instance.
 */
ModifyInstanceFleetRequestPrivate::ModifyInstanceFleetRequestPrivate(
    const EMRRequest::Action action, ModifyInstanceFleetRequest * const q)
    : EMRRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ModifyInstanceFleetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyInstanceFleetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyInstanceFleetRequest instance.
 */
ModifyInstanceFleetRequestPrivate::ModifyInstanceFleetRequestPrivate(
    const ModifyInstanceFleetRequestPrivate &other, ModifyInstanceFleetRequest * const q)
    : EMRRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
