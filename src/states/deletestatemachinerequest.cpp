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

#include "deletestatemachinerequest.h"
#include "deletestatemachinerequest_p.h"
#include "deletestatemachineresponse.h"
#include "sfnrequest_p.h"

namespace QtAws {
namespace SFN {

/*!
 * \class QtAws::SFN::DeleteStateMachineRequest
 *
 * \brief The DeleteStateMachineRequest class encapsulates SFN DeleteStateMachine requests.
 *
 * \ingroup SFN
 *
 *  <fullname>AWS Step Functions</fullname>
 * 
 *  AWS Step Functions is a service that lets you coordinate the components of distributed applications and microservices
 *  using visual
 * 
 *  workflows>
 * 
 *  You can use Step Functions to build applications from individual components, each of which performs a discrete function,
 *  or <i>task</i>, allowing you to scale and change applications quickly. Step Functions provides a console that helps
 *  visualize the components of your application as a series of steps. Step Functions automatically triggers and tracks each
 *  step, and retries steps when there are errors, so your application executes predictably and in the right order every
 *  time. Step Functions logs the state of each step, so you can quickly diagnose and debug any
 * 
 *  issues>
 * 
 *  Step Functions manages operations and underlying infrastructure to ensure your application is available at any scale.
 *  You can run tasks on AWS, your own servers, or any system that has access to AWS. You can access and use Step Functions
 *  using the console, the AWS SDKs, or an HTTP API. For more information about Step Functions, see the <i> <a
 *  href="http://docs.aws.amazon.com/step-functions/latest/dg/welcome.html">AWS Step Functions Developer Guide</a>
 *
 * \sa SFNClient::deleteStateMachine
 */

/*!
 * @brief  Constructs a new DeleteStateMachineRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteStateMachineRequest::DeleteStateMachineRequest(const DeleteStateMachineRequest &other)
    : SFNRequest(new DeleteStateMachineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteStateMachineRequest object.
 */
DeleteStateMachineRequest::DeleteStateMachineRequest()
    : SFNRequest(new DeleteStateMachineRequestPrivate(SFNRequest::DeleteStateMachineAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStateMachineRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteStateMachineResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteStateMachineResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SFNClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStateMachineRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStateMachineResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteStateMachineRequestPrivate
 *
 * @brief  Private implementation for DeleteStateMachineRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteStateMachineRequestPrivate object.
 *
 * @param  action  SFN action being performed.
 * @param  q       Pointer to this object's public DeleteStateMachineRequest instance.
 */
DeleteStateMachineRequestPrivate::DeleteStateMachineRequestPrivate(
    const SFNRequest::Action action, DeleteStateMachineRequest * const q)
    : SFNRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteStateMachineRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteStateMachineRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteStateMachineRequest instance.
 */
DeleteStateMachineRequestPrivate::DeleteStateMachineRequestPrivate(
    const DeleteStateMachineRequestPrivate &other, DeleteStateMachineRequest * const q)
    : SFNRequestPrivate(other, q)
{

}

} // namespace SFN
} // namespace QtAws
